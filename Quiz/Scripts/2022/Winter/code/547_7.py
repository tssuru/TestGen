try:
    
    try:
        print(8, end="")
        print(int(6//2), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
