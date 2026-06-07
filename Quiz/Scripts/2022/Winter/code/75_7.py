try:
    
    try:
        print(7, end="")
        print(int(9/2), end="")
        print(8, end="")
    except TypeError: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(0, end="")
    
except: print('error')
