try:
    
    try:
        print(6, end="")
        print(int("2"), end="")
        print(5, end="")
    except TypeError: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
