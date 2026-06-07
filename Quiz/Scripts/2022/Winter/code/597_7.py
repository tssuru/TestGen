try:
    
    try:
        print(6, end="")
        print(int(8//2), end="")
        print(7, end="")
    except ValueError: 
        print(4, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(9, end="")
    
except: print('error')
