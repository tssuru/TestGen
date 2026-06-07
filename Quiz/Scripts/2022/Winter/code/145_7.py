try:
    
    try:
        print(0, end="")
        print(int(8%0.0), end="")
        print(7, end="")
    except ValueError: 
        print(0, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
