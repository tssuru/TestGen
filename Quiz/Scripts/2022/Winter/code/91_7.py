try:
    
    try:
        print(5, end="")
        print(int("a3"), end="")
        print(1, end="")
    except TypeError: 
        print(2, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
