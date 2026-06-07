try:
    
    try:
        print(7, end="")
        print(int("a3"), end="")
        print(6, end="")
    except TypeError: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(0, end="")
    finally:
        print(2, end="")
    
except: print('error')
