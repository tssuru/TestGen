try:
    
    try:
        print(8, end="")
        print(int(0/2), end="")
        print(6, end="")
    except TypeError: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(4, end="")
    finally:
        print(3, end="")
    
except: print('error')
