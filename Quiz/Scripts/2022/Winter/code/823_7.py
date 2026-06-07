try:
    
    try:
        print(7, end="")
        print(int(2%2), end="")
        print(1, end="")
    except TypeError: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(0, end="")
    finally:
        print(0, end="")
    
except: print('error')
