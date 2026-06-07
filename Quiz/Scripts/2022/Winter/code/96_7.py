try:
    
    try:
        print(4, end="")
        print(int(3/1), end="")
        print(5, end="")
    except ValueError: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
