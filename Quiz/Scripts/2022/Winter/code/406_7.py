try:
    
    try:
        print(0, end="")
        print(int(5//0), end="")
        print(9, end="")
    except ValueError: 
        print(2, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
