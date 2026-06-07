try:
    
    try:
        print(0, end="")
        print(int("a1"), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(6, end="")
    finally:
        print(5, end="")
    
except: print('error')
