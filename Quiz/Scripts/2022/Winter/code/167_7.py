try:
    
    try:
        print(5, end="")
        print(int("a2"), end="")
        print(6, end="")
    except TypeError: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
