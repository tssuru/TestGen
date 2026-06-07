try:
    
    try:
        print(3, end="")
        print(int(5/0.0), end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
