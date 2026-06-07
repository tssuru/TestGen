try:
    
    try:
        print(0, end="")
        print(2>=9, end="")
        print(6, end="")
    except Exception: 
        print(9, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
