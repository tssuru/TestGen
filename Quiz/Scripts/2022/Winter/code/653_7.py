try:
    
    try:
        print(7, end="")
        print(int(0//1), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(2, end="")
    
except: print('error')
