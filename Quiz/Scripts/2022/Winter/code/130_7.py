try:
    
    try:
        print(1, end="")
        print(int("d3"), end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(7, end="")
    
except: print('error')
