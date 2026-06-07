try:
    
    try:
        print(0, end="")
        print(int(8//3), end="")
        print(5, end="")
    except TypeError: 
        print(3, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(6, end="")
    
except: print('error')
