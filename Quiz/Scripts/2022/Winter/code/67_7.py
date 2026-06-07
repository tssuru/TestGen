try:
    
    try:
        print(6, end="")
        print(4<=7, end="")
        print(9, end="")
    except Exception: 
        print(8, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
