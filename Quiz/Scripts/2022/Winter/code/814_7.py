try:
    
    try:
        print(4, end="")
        print(int(0/0.0), end="")
        print(2, end="")
    except TypeError: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(5, end="")
    finally:
        print(7, end="")
    
except: print('error')
