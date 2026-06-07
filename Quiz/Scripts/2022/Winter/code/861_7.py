try:
    
    try:
        print(5, end="")
        print(int("a4"), end="")
        print(7, end="")
    except TypeError: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(0, end="")
    finally:
        print(3, end="")
    
except: print('error')
