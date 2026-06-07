try:
    
    try:
        print(0, end="")
        print(int("6"), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(4, end="")
    
except: print('error')
