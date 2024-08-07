
import random




while True:
    games = ["Overwatch", "Cyberpunk 2077", "GTA V", "Forza Horizon 3", "Forza Horizon 5", "Control", "The Legend Of Zelda: TOTK", "HearthStone"]

    games.append("Sea of Thieves")
    games.append("Outer Wilds")
    games.append("Mirror's Edge Catalyst")
    games.append("The Finals")
    games.append("Just Cause 3")
    games.append("Assetto Corsa Competizione")
    games.append("Kerbal Space Program")
    games.append("Forza Horizon 4")
    games.append("Half-Life")
    games.append("SteamWorld Dig 2")
    games.append("Star Citizen")
    games.append("BioShock")
    games.append("MultiVersus")
    games.append("Super Mario Odessey")

    
    #games.append("Himno")
    #games.append("Papers, Please")
    #games.append("Jedi: Fallen Order")
    #games.append("Rocket League")
    #games.append("Wolfenstein")

    nGames = len(games)

    for i in range(nGames):
        j = random.randint(0, len(games) -1)
        print("\t %d. %s" % (i + 1, games[j]))
        games.remove(games[j])
    
    

    while True:
        
        resp = input(str("\n\nDo you want to roll again? (Y/N): "))
        resp = resp.upper()

        if (resp == 'Y') ^ (resp == 'N'):
            break
    
    if resp == 'N':
        break
    

    