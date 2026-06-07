try:
    
    try:
        print(1, end="")
        print(int("a4"), end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(2, end="")
    
except: print('error')
