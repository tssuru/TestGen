try:
    
    try:
        print(5, end="")
        print(int(1%3), end="")
        print(5, end="")
    except ValueError: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
