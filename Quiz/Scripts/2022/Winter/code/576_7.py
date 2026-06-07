try:
    
    try:
        print(7, end="")
        print(int(4%0), end="")
        print(1, end="")
    except TypeError: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(6, end="")
    finally:
        print(3, end="")
    
except: print('error')
