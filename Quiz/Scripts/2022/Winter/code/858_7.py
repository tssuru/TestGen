try:
    
    try:
        print(9, end="")
        print(int("6"), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
