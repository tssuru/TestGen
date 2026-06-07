try:
    
    try:
        print(6, end="")
        print(int(9%3), end="")
        print(3, end="")
    except ValueError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
