try:
    
    try:
        print(9, end="")
        print(int("a4"), end="")
        print(5, end="")
    except TypeError: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(6, end="")
    finally:
        print(9, end="")
    
except: print('error')
