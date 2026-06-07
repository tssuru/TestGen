try:
    
    try:
        print(4, end="")
        print(int(8%2), end="")
        print(5, end="")
    except ValueError: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
