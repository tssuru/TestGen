try:
    
    try:
        print(0, end="")
        print(int(7/1), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
