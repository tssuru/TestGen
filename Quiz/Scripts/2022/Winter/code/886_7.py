try:
    
    try:
        print(9, end="")
        print(int(6/0.0), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
