try:
    
    try:
        print(5, end="")
        print(int(8%0.0), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
