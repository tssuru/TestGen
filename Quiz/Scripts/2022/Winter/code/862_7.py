try:
    
    try:
        print(9, end="")
        print(2>=8, end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(5, end="")
    
except: print('error')
