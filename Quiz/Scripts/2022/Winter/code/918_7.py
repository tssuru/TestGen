try:
    
    try:
        print(2, end="")
        print(int("8"), end="")
        print(0, end="")
    except TypeError: 
        print(5, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(3, end="")
    
except: print('error')
