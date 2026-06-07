try:
    
    try:
        print(8, end="")
        print(int(7%0.0), end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(9, end="")
    
except: print('error')
