try:
    
    try:
        print(2, end="")
        print(int("a0"), end="")
        print(3, end="")
    except TypeError: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(1, end="")
    
except: print('error')
