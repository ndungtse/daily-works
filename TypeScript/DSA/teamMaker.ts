interface Player {
    name: string;
    age?: number;
    skill?: number;
    position: string;
}

const players: Player[] = [
    { name: 'Banjo', position: 'DF' },
    { name: 'Gaks', position: 'DF' },
    { name: 'Moustapha', position: 'DF' },
    { name: 'Derick', position: 'DF' },
    { name: 'Charles', position: 'MF' },
    { name: 'Apotre', position: 'MF' },
    { name: 'Pazzo', position: 'MF' },
    { name: 'Pogba', position: 'MF' },
    { name: 'Bigwi', position: 'FW' },
    { name: 'Bellamy', position: 'FW' },
    { name: 'Laurent', position: 'FW' },
    { name: 'Cancelo', position: 'FW' },
]

const TeamA: Player[] = [];
const TeamB: Player[] = [];

function makeFirstRandomTeams(players: Player[]) {
    let teamATurn = true;
    const playersCopy = [...players];
    const defenders = playersCopy.filter((player) => player.position === 'DF');
    const midfielders = playersCopy.filter((player) => player.position === 'MF');
    const forwards = playersCopy.filter((player) => player.position === 'FW');

    while (defenders.length > 0) {
        const defender = defenders.splice(Math.floor(Math.random() * defenders.length), 1)[0];
        if (teamATurn) {
            TeamA.push(defender);
        } else {
            TeamB.push(defender);
        }
        teamATurn = !teamATurn;
    }

    while (midfielders.length > 0) {
        const midfielder = midfielders.splice(Math.floor(Math.random() * midfielders.length), 1)[0];
        if (teamATurn) {
            TeamA.push(midfielder);
        } else {
            TeamB.push(midfielder);
        }
        teamATurn = !teamATurn;
    }

    while (forwards.length > 0) {
        const forward = forwards.splice(Math.floor(Math.random() * forwards.length), 1)[0];
        if (teamATurn) {
            TeamA.push(forward);
        } else {
            TeamB.push(forward);
        }
        teamATurn = !teamATurn;
    }
}

makeFirstRandomTeams(players);

console.log('Team A', TeamA);
console.log('Team B', TeamB);