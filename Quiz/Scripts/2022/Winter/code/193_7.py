try:
    
    try:
        print(2, end="")
        print(1!=1, end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
