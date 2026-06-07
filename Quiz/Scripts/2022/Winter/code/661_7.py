try:
    
    try:
        print(3, end="")
        print(5<=2, end="")
        print(2, end="")
    except ValueError: 
        print(0, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(4, end="")
    finally:
        print(9, end="")
    
except: print('error')
