try:
    a,b,c=8,3,5
    def h(b):
        global c
        a+=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=1,0,9
    print(h(a),a,b,c)
    
except: print('error')
