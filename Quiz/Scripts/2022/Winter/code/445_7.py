try:
    
    try:
        print(3, end="")
        print(int(9/2), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(3, end="")
    
except: print('error')
