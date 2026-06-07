try:
    
    try:
        print(8, end="")
        print(int("a1"), end="")
        print(3, end="")
    except TypeError: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
