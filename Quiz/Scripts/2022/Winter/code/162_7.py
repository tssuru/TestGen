try:
    
    try:
        print(8, end="")
        print(int("7"), end="")
        print(6, end="")
    except TypeError: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
