try:
    
    try:
        print(5, end="")
        print(int("7"), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
