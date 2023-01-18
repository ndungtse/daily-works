var __spreadArray = (this && this.__spreadArray) || function (to, from, pack) {
    if (pack || arguments.length === 2) for (var i = 0, l = from.length, ar; i < l; i++) {
        if (ar || !(i in from)) {
            if (!ar) ar = Array.prototype.slice.call(from, 0, i);
            ar[i] = from[i];
        }
    }
    return to.concat(ar || Array.prototype.slice.call(from));
};
var players = [
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
];
var TeamA = [];
var TeamB = [];
function makeFirstRandomTeams(players) {
    var teamATurn = true;
    var playersCopy = __spreadArray([], players, true);
    var defenders = playersCopy.filter(function (player) { return player.position === 'DF'; });
    var midfielders = playersCopy.filter(function (player) { return player.position === 'MF'; });
    var forwards = playersCopy.filter(function (player) { return player.position === 'FW'; });
    while (defenders.length > 0) {
        var defender = defenders.splice(Math.floor(Math.random() * defenders.length), 1)[0];
        if (teamATurn) {
            TeamA.push(defender);
        }
        else {
            TeamB.push(defender);
        }
        teamATurn = !teamATurn;
    }
    while (midfielders.length > 0) {
        var midfielder = midfielders.splice(Math.floor(Math.random() * midfielders.length), 1)[0];
        if (teamATurn) {
            TeamA.push(midfielder);
        }
        else {
            TeamB.push(midfielder);
        }
        teamATurn = !teamATurn;
    }
    while (forwards.length > 0) {
        var forward = forwards.splice(Math.floor(Math.random() * forwards.length), 1)[0];
        if (teamATurn) {
            TeamA.push(forward);
        }
        else {
            TeamB.push(forward);
        }
        teamATurn = !teamATurn;
    }
}
makeFirstRandomTeams(players);
console.log('Team A', TeamA);
console.log('Team B', TeamB);
