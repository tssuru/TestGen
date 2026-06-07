try:
    
    try:
        print(3, end="")
        print(int(9%0), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(2, end="")
    
except: print('error')
