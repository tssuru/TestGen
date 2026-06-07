try:
    a,b,c=5,2,9
    def h(b):
        global c
        a-=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=3,8,4
    print(h(a),a,b,c)
    
except: print('error')
