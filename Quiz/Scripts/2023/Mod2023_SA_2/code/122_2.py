try:
    a,b,c=7,9,2
    def h(b):
        a=4
        b-=1
        c=5
        return a+b+c
    
    a,b,c=1,0,1
    print(h(a),a,b,c)
    
except: print('error')
