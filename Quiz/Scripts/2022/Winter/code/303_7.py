try:
    
    try:
        print(8, end="")
        print(int(6//0.0), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
