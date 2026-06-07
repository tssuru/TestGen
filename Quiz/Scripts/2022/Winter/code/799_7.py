try:
    
    try:
        print(0, end="")
        print(int(2%1), end="")
        print(8, end="")
    except TypeError: 
        print(7, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
