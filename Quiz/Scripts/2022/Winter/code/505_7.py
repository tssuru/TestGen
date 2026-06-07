try:
    
    try:
        print(7, end="")
        print(int(4/1), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
