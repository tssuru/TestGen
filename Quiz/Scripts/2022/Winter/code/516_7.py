try:
    
    try:
        print(8, end="")
        print(int("6"), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(7, end="")
    
except: print('error')
