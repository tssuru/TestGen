try:
    
    try:
        print(2, end="")
        print(int("6"), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(9, end="")
    
except: print('error')
