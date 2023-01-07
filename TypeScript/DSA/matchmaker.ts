/* with 20 teams */
const eplTeams = ["ARS", "AVL", "BOU", "BUR", "CHE", "CRY", "EVE", "FUL", "LEI", "LIV", "MCI", "MUN", "NEW", "SOU", "NOT", "SWA", "TOT", "WAT", "WBA", "WHU"];
/* with 16 teams*/
const esTeams = ["ATM", "BAR", "BET", "CEL", "EIB", "ESP", "GET", "GRA", "LEV", "LUG", "MAL", "OSA", "RMA", "SEV", "VAL", "VIL"];

const firstFixtures: string[][] = [];
const secondFixtures: string[][] = [];
const Fixtures: string[][] = [];

export function makeRandomFirstFixtures(teamList: string[]) {
    for (let i = 1; i < teamList.length; i++) {
        const pickedTeams: string[] = [];
        for (let j = 0; j < teamList.length; j++) {
            if (pickedTeams.length === teamList.length) {
                break;
            }

            let randomIndex1 = Math.floor(Math.random() * teamList.length);
            while (pickedTeams.includes(teamList[randomIndex1])) {
                randomIndex1 = Math.floor(Math.random() * teamList.length);
            }

            let randomIndex2 = Math.floor(Math.random() * teamList.length);
            while (randomIndex1 === randomIndex2 || pickedTeams.includes(teamList[randomIndex2])) {
                randomIndex2 = Math.floor(Math.random() * teamList.length);
            }

            const randomTeam1 = teamList[randomIndex1];
            const randomTeam2 = teamList[randomIndex2];
            pickedTeams.push(randomTeam1);
            pickedTeams.push(randomTeam2);
            const match = [randomTeam1, randomTeam2];
            firstFixtures.push(match);
        }
    }
    
    return firstFixtures;
}

export function makeSecondFixtures() {
    // randomize second half of fixtures
    const tempFixtures: string[][] = [...firstFixtures];
    for (let i = 0; i < tempFixtures.length; i++) {
        const temp = tempFixtures[i][0];
        tempFixtures[i][0] = tempFixtures[i][1];
        tempFixtures[i][1] = temp;
    }
    for (let i = 0; i < tempFixtures.length; i++) {
        secondFixtures.push(tempFixtures[i]);
    }

    return secondFixtures;
}

export function showFixtures(n: number) {
    // show first half of fixtures
    let count = n/2 ;
    let matchday = 1;
    for (let i = 0; i < firstFixtures.length; i++) {
        if (count === n/2) {
            console.log("\nMatchday " + matchday + " Fixtures: " + "------------------- \n");
            matchday++;
            count = 0;
        }
        console.log(firstFixtures[i][0] + " vs " + firstFixtures[i][1]);
        count++;
    }
    
    // show second half of fixtures
    console.log("\nSecond Half Fixtures: " + "-------------------");
    
    count = n/2;
    matchday = 1;
    for (let i = 0; i < secondFixtures.length; i++) {
        if (count === n/2) {
            console.log("\nMatchday " + (matchday+n-1) + " Fixtures: " + "------------------- \n");
            matchday++;
            count = 0;
        }
        console.log(secondFixtures[i][0] + " vs " + secondFixtures[i][1]);
        count++;
    }
}

export function matchMaker(teams: string[]) {
    makeRandomFirstFixtures(teams);
    makeSecondFixtures();
    Fixtures.push(...firstFixtures);
    Fixtures.push(...secondFixtures);
    showFixtures(teams.length);
}

matchMaker(esTeams);
// matchMaker(eplTeams);
