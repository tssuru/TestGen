try:
    
    try:
        print(2, end="")
        print(int(8%0), end="")
        print(3, end="")
    except ValueError: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
